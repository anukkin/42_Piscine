#!/bin/sh

find . -name '*.sh' | sed 's/.*\/\(.*\)\.sh/\1/g'

