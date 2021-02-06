#include "../src/avl.cpp"

#define CATCH_CONFIG_MAIN
#include "./catch.hpp"

/*
 * README 
 * 
 * To get this testing file to work, there are a few things you need to do.
 * 
 * First, the "#define CATCH_CONFIG_MAIN" directive on line 3 will cause this
 * file to have an auto-generated main method inserted at the bottom during the
 * pre-processing stage. You're importing your implementation file in line 1,
 * which also includes a main. This will cause a compilation error due to the
 * re-definition of main. To fix this, either comment out the main in your
 * implementation file when you're running your tests, or use preprocessor
 * directives to prevent the compilation of the main in your implementation
 * file when you're compiling this test file. The second choice is harder, but
 * we will be impressed if you do it!
 * 
 * Second, you'll need to implement at least the insert, preorder, inorder, and
 * postorder traversals to match the following interface:
 * 
 * 
 * You'll also need to name your AVL tree class "AvlTree" and your node class
 * "Node".
 * 
 * We left the implementation details of this project open-ended to give you
 * practice with making design decisions. However, Catch2 is first and foremost
 * a unit-testing framework, and unit tests are primarily used to ensure
 * functions behave properly. Therefore, in order to give you some tests to
 * start with, we need to standardize part of your implementation. Don't worry;
 * most of the hard work is still left up to you! :^)
 */

TEST_CASE("Insert valid student", "[insert]"){
    AvlTree tree;
    REQUIRE(tree.insert("Tommy", 12345678));
}

TEST_CASE("Reject invalid and duplicate students", "[insert]"){
    AvlTree tree;
    REQUIRE_FALSE(tree.insert("!@#!@", 12345678)); //Non-alpha characters
    REQUIRE_FALSE(tree.insert("Tommy", 123)); //ID not 8 digits
    REQUIRE(tree.insert("Tommy", 12345678));
    REQUIRE_FALSE(tree.insert("Tommy", 12345678)); //No duplicate IDs!
}

TEST_CASE("Stepik test case 1", "[insert][search]"){
    AvlTree tree;
    REQUIRE(tree.search(12345678) == "Not found!");
    REQUIRE(tree.search("Adam") == -1);
    REQUIRE(tree.insert("Adam", 12345678));
    REQUIRE(tree.search(23456789) == "Not found!");
    REQUIRE(tree.search(12345678) == "Adam");
}

TEST_CASE("Stepik test case 3", "[insert][count]"){
    AvlTree tree;
    REQUIRE(tree.insert("Evan", 44985771));
    REQUIRE(tree.insert("Earl", 31834874));
    REQUIRE(tree.insert("Erica", 21456789));
    REQUIRE(tree.countLevels() == 2);
    REQUIRE(tree.insert("Enrique", 17891824));
    REQUIRE(tree.countLevels() == 3);
}

TEST_CASE("Stepik test case 5", "[insert][traversal]"){
    AvlTree tree;
    REQUIRE(tree.insert("Caroline", 50005000));
    REQUIRE(tree.insert("Cory", 35354334));
    REQUIRE(tree.insert("Cecilia", 76543210));
    REQUIRE(tree.insert("Carla", 56567342));
    REQUIRE(tree.insert("Cody", 83711221));
    REQUIRE(tree.insert("Chris", 17449900));
    REQUIRE(tree.traverseInorder() == "Chris, Cory, Caroline, Carla, Cecilia, Cody");
    REQUIRE(tree.traversePreorder() == "Caroline, Cory, Chris, Cecilia, Carla, Cody");
    REQUIRE(tree.traversePostorder() == "Chris, Cory, Carla, Cody, Cecilia, Caroline");
}
