<?php

function drupalorg_sponsor_redirect_page($sponsor) {
  $country = drupalorg_get_and_vary_header('GeoIP-country');
  switch ($sponsor) {
    case '1and1-shared':
      switch ($country) {
        case 'DE':
          drupal_goto('https://hosting.1und1.de/drupal-hosting?ac=OM.PU.PUo63K403739T7073a');
          return;

        case 'AT':
          drupal_goto('https://www.1und1.at/webhosting?ac=OM.AA.AAo63K403756T7073a');
          return;

        case 'GB':
          drupal_goto('https://www.1and1.co.uk/hosting?ac=OM.UK.UKo63K403741T7073a');
          return;

        case 'FR':
          drupal_goto('https://www.1and1.fr/hebergement-web?ac=OM.FR.FRo63K403742T7073a');
          return;

        case 'ES':
          drupal_goto('https://www.1and1.es/alojamiento-web?ac=OM.WE.WEo63K403743T7073a');
          return;

        case 'CA':
          drupal_goto('https://www.1and1.ca/web-hosting?ac=OM.CA.CAo63K403744T7073a');
          return;

        case 'MX':
          drupal_goto('https://www.1and1.mx/web-hosting?ac=OM.MB.MBo63K403745T7073a');
          return;

        case 'IT':
          drupal_goto('https://www.1and1.it/web-hosting?ac=OM.IA.IAo63K403746T7073a');
          return;

        default:
          drupal_goto('https://www.1and1.com/web-hosting?ac=OM.US.USo63K403740T7073a');
          return;
      }

    case '1and1-cloud':
      switch ($country) {
        case 'DE':
          drupal_goto('https://hosting.1und1.de/cloud-app-center/drupal-download?ac=OM.PU.PUo63K403739T7073a');
          return;

        case 'AT':
          drupal_goto('https://www.1und1.at/cloud-app-center/drupal-download?ac=OM.AA.AAo63K403756T7073a');
          return;

        case 'GB':
          drupal_goto('https://www.1and1.co.uk/cloud-app-centre/drupal-download?ac=OM.UK.UKo63K403741T7073a');
          return;

        case 'FR':
          drupal_goto('https://www.1and1.fr/cloud-app-center/drupal-download?ac=OM.FR.FRo63K403742T7073a');
          return;

        case 'ES':
          drupal_goto('https://www.1and1.es/cloud-app-center/drupal-descarga?ac=OM.WE.WEo63K403743T7073a');
          return;

        case 'CA':
          drupal_goto('https://www.1and1.ca/cloud-app-center/drupal-download?ac=OM.CA.CAo63K403744T7073a');
          return;

        case 'MX':
          drupal_goto('https://www.1and1.mx/cloud-app-center/drupal-descarga?ac=OM.MB.MBo63K403745T7073a');
          return;

        case 'IT':
          drupal_goto('https://www.1and1.it/cloud-app-center/drupal-download?ac=OM.IA.IAo63K403746T7073a');
          return;

        default:
          drupal_goto('https://www.1and1.com/cloud-app-center/drupal-download?ac=OM.US.USo63K403740T7073a');
          return;
      }

    case '1and1-vps':
      switch ($country) {
        case 'DE':
          drupal_goto('https://hosting.1und1.de/vserver?ac=OM.PU.PUo63K403739T7073a');
          return;

        case 'AT':
          drupal_goto('https://www.1und1.at/vserver?ac=OM.AA.AAo63K403756T7073a');
          return;

        case 'GB':
          drupal_goto('https://www.1and1.co.uk/virtual-server?ac=OM.UK.UKo63K403741T7073a');
          return;

        case 'FR':
          drupal_goto('https://www.1and1.fr/serveurs-virtuels?ac=OM.FR.FRo63K403742T7073a');
          return;

        case 'ES':
          drupal_goto('https://www.1and1.es/servidores-virtuales?ac=OM.WE.WEo63K403743T7073a');
          return;

        case 'CA':
          drupal_goto('https://www.1and1.ca/vps-hosting?ac=OM.CA.CAo63K403744T7073a');
          return;

        case 'MX':
          drupal_goto('https://www.1and1.mx/servidores-virtuales?ac=OM.MB.MBo63K403745T7073a');
          return;

        case 'IT':
          drupal_goto('https://www.1and1.it/server-virtuali?ac=OM.IA.IAo63K403746T7073a');
          return;

        default:
          drupal_goto('https://www.1and1.com/vps-hosting?ac=OM.US.USo63K403740T7073a');
          return;
      }

    case '1and1-dedicated':
      switch ($country) {
        case 'DE':
          drupal_goto('https://hosting.1und1.de/dedicated-server-tarife?ac=OM.PU.PUo63K403739T7073a');
          return;

        case 'AT':
          drupal_goto('https://www.1und1.at/dedicated-server-tarife?ac=OM.AA.AAo63K403756T7073a');
          return;

        case 'GB':
          drupal_goto('https://www.1and1.co.uk/server-dedicated-tariff?ac=OM.UK.UKo63K403741T7073a');
          return;

        case 'FR':
          drupal_goto('https://www.1and1.fr/server-dedicated-tariff?ac=OM.FR.FRo63K403742T7073a');
          return;

        case 'ES':
          drupal_goto('https://www.1and1.es/server-dedicated-tariff?ac=OM.WE.WEo63K403743T7073');
          return;

        case 'CA':
          drupal_goto('https://www.1and1.ca/server-dedicated-tariff?ac=OM.CA.CAo63K403744T7073a');
          return;

        case 'MX':
          drupal_goto('https://www.1and1.mx/server-dedicated-tariff?ac=OM.MB.MBo63K403745T7073a');
          return;

        case 'IT':
          drupal_goto('https://www.1and1.it/server-dedicated-tariff?ac=OM.IA.IAo63K403746T7073a');
          return;

        default:
          drupal_goto('https://www.1and1.com/server-dedicated-tariff?ac=OM.US.USo63K403740T7073a');
          return;
      }

    case 'debug':
      return t('Country: %country', ['%country' => $country]);
  }
}
