#!/bin/bash

echo "populating secrets"
consul-template -template "secrets.tpl:secrets.yaml" -once
