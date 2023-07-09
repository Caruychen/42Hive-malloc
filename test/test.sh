#!/bin/bash

lib_dir=$(cd .. && echo $PWD)
export DYLD_LIBRARY_PATH=$lib_dir:$DYLD_LIBRARY_PATH && ./test_malloc
