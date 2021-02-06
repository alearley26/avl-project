#include "../src/avl.cpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

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

// Our test cases to test each function!
  TEST_CASE("Insert successful", "[Node]"){
        AvlTree tree;
        REQUIRE(tree.insert(root, "Tommy", 123456789));
        REQUIRE_FALSE(!insert(root, "Tommy", 123456789));
  }

  TEST_CASE("Search successful", "[Node]"){
        Node * root;
        REQUIRE(search(root, "Tommy"));
        REQUIRE_FALSE(!search(root, "Tommy"));

        REQUIRE(search(root, 123456789));
        REQUIRE_FALSE(!search(root, 123456789));
  }

  TEST_CASE("PrintInorder", "[Node][print]"){
        Node * root;
        vector<string> names{"Brian", "Brandon", "Briana", "Bella"};
        vector<string> more_names{"Brian", "Brandon", "Briana", "Bella", "Sam"};

        REQUIRE(printInorder(root) == names);
        REQUIRE_FALSE(printInorder(root) == more_names);
  }

  TEST_CASE("PrintLevelCount", "[Node][print]"){
        Node * root;
       
        REQUIRE(printLevelCount(root) == 2);
        REQUIRE_FALSE(printLevelCount(root) == 3);
  }