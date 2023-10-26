#include "stdio.h"

void main()
{
    int a = 0x44;
    int b = 0x22;
    printf("%x", a|b);
}



server {

    server_name passports.gov.sd;


    location / {
        include proxy_params;
        proxy_pass https://queuepassports.sudapps.com;
        proxy_cache passports_cache;
        proxy_cache_valid any 1h;
    }

    error_log /var/log/nginx/passports.gov.error.log;

    listen 443 ssl; # managed by Certbot
    ssl_certificate /etc/letsencrypt/live/passports.gov.sd/fullchain.pem; # managed by Certbot
    ssl_certificate_key /etc/letsencrypt/live/passports.gov.sd/privkey.pem; # managed by Certbot
    include /etc/letsencrypt/options-ssl-nginx.conf; # managed by Certbot
    ssl_dhparam /etc/letsencrypt/ssl-dhparams.pem; # managed by Certbot

    add_header Strict-Transport-Security "max-age=31536000; includeSubDomains" always;
    server_tokens off;
}
server {
    if ($host = passports.gov.sd) {
        return 301 https://$host$request_uri;
    } # managed by Certbot
    listen 80;
    server_name passports.gov.sd;
    return 404; # managed by Certbot
}
