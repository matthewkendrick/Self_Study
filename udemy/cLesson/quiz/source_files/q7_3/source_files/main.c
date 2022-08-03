#include "../header_files/nameDB.h"

int main(void) {
  init();
  setName(0, "Matthew Kendrick");
  setName(1, "Ken Watanabe");
  setName(2, "Anna Kendrick");
  showName(1);
  showName(2);
  showName(0);
}