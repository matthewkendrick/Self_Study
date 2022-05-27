'use strict'

{
  const numbers = [1, 4, 7, 8, 10];

  // const evenNumbers = numbers.filter(number => {
  //   if (number % 2 == 0) {
  //     return true;
  //   } else {
  //     return false;
  //   }
  // });

  const evenNumbers = numbers.filter(number => number % 2 == 0)

  console.log(evenNumbers);
}