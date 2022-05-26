'use strict'

// console.log('------------------');
// console.log('--------Ad--------');
// console.log('------------------');
// console.log('Tom is great!');
// console.log('Bob is great!');
// console.log('------------------');
// console.log('--------Ad--------');
// console.log('------------------');
// console.log('Steve is great!');
// console.log('Richard is great!');
// console.log('------------------');
// console.log('--------Ad--------');
// console.log('------------------');


// 上記のように何度も使いまわせるような部品は関数としてまとめることで以下のようにスッキリと書くことができます

function showAd() {
  console.log('------------------');
  console.log('--------Ad--------');
  console.log('------------------');
}

showAd()
console.log('Tom is great!');
console.log('Bob is great!');
showAd()
console.log('Steve is great!');
console.log('Richard is great!');
showAd()