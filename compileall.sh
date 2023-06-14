#!/bin/bash
gcc -std=gnu99 -o server server.c
gcc -std=gnu99 -o client client.c
# gcc -o dec_server dec_server.c
# gcc -o dec_client dec_client.c
gcc -std=gnu99 -o keygen keygen.c
