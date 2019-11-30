#!/bin/bash
find /usr/courses/cps393/dwoit/courseNotes/ -name "*.h" -and ! -iname "*t*" -atime -75 -group cps393 -ls 2>/dev/null
