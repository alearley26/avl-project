#include "../src/avl.cpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

// Our test cases to test each function!
  TEST_CASE("Insert successful", "[Node]"){
        Node * root;
        REQUIRE(insert(root, "Tommy", 123456789));
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