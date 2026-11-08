#!/bin/bash
set -e
ABI=$1
if [ -z "$ABI" ]; then
    ABI="arm64-v8a"
fi
echo "Packaging for ABI: $ABI"
