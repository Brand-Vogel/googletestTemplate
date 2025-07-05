# googletestTemplate
Starter code for a c++ application using gtest.  

As an example application, we simulate a coin toss than can result in heads or tails. The implementation uses a random number generator producing a number from 1 to 100 and uses this number and a threshold to decide the outcome of the toss. In the test code, we mock the random generator to have full control over the toss outcome. Either the real or mocked implementation is injected in the constructor of the Coin object depending on the desired behavior.  

## Repository structure
RandomGenerator: The real and mock implementations of the random generator, together with the interface implemented by both of them.  
Coin: The implementation of the Coin class.  
main.cpp: A sample application using the real implementations of the Coin + RandomGenerator classes.
test.cpp: A suite of unit tests using the mocked random generator implementation.  

## Dependencies
- cmake
- A c++17 compiler (for googletest 1.17.0)  
- googletest is automatically checked-out by cmake when building

## Building the project
```
mkdir <build_directory>
cd <build_directory>
cmake <project_directory>
make
```

## Running the application
After building:  
```
./app
```

## Running the tests
After building:  
```
./test
```

