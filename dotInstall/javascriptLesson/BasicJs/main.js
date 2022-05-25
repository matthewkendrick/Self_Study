'use strict'

const score = 60;
const name = 'Taguchi';

if (score >= 50) {
  if (name == 'Taguchi') {
    console.log('Good Job!!!');
  }
}

// 上記をさらに見やすくするため、
// 論理演算子を使って書いていきましょう
// &&  : なおかつ
// ||  : もしくは
// !   : 〜ではない

if (score >= 50 && name == 'Taguchi') {
  console.log('Good Job!!!');
}