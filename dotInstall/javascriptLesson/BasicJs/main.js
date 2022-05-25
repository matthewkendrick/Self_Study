'use strict'

// プラスだけは文字列の連結として扱われます
const num = 3

console.log('5' * num);
console.log('5' + num);

console.log(parseInt('5, 10') + num);