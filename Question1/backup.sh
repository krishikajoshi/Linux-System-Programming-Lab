#!/bin/bash

mkdir -p backup

processed=0
duplicates=0
backedup=0

> report.txt
> errors.txt
> hashes.txt

for file in submissions/*
do
    if [ -f "$file" ]; then

        processed=$((processed+1))

        hash=$(md5 -q "$file")

        if grep -q "$hash" hashes.txt
        then
            duplicates=$((duplicates+1))
        else
            echo "$hash" >> hashes.txt
            cp "$file" backup/ 2>>errors.txt
            backedup=$((backedup+1))
        fi

    fi
done

echo "Files Processed: $processed" >> report.txt
echo "Duplicate Files: $duplicates" >> report.txt
echo "Files Backed Up: $backedup" >> report.txt
