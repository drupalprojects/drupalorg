#!/bin/bash
set -e

cd /var/git/repositories
for REPOSITORY_DIR in `find . -maxdepth 3 -name "*.git" -type d`;
do
  REPOSITORY=`echo $REPOSITORY_DIR | cut -c 3-`
  HEAD=`cat $REPOSITORY_DIR/HEAD | cut -d " " -f 2`
  [[ -f $REPOSITORY_DIR/$HEAD ]] && HEAD_EXISTS="true" || HEAD_EXISTS="false"
  BRANCH=`echo $HEAD | cut -c 12-`
  echo "/var/git/repositories/$REPOSITORY;$BRANCH;$HEAD_EXISTS" 
done

