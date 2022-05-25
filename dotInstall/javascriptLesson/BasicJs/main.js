'use strict'

const score = 85;

if (score >= 80) {
  console.log('Greate!');
} else {
  console.log('OK...');
}

// if else文に関しては以下のようにも書ける、ということを知っておきましょう
score >= 80 ? console.log('Greate!') : console.log('OK...');