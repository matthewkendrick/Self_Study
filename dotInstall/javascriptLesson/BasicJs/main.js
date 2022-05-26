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

function showAd(message = 'Ad-second') {
  //　こちらは値を仮置きして定義しているので"仮引数"と呼びます
  // また = で繋げることで、以下のようにshowAd()と引数を渡さなかった場合のデフォルト値を設定することができます

  console.log('------------------');
  console.log(`--------${message}--------`);
  console.log('------------------');
}

showAd('Header Ad')     // 実際に関数を呼び出すときに渡されるため、こちらは"実引数"と呼ばれます
console.log('Tom is great!');
console.log('Bob is great!');
showAd('Ad-first')
console.log('Steve is great!');
showAd()
console.log('Richard is great!');
showAd('Footer Ad')