#!/usr/bin/env bash

cd build/
build_dir=$(pwd)

ln -s "${build_dir}/catpp" ~/.local/bin/catpp

