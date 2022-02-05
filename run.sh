cd build/tests
cmake --build .
wait
ctest --output-on-failure -R $1
