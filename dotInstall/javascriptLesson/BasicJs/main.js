'use strict'

const signal = 'blue';

// if (signal == 'red') {
//   console.log('Stop!');
// } else if (signal == 'yellow') {
//   console.log('Caution!');
// } else if (signal == 'blue') {
//   console.log('Go!');
// }

// switch文は上記のように条件が全て==で繋がれるような場合に使うことができます
switch (signal) {
  case 'red':
    console.log('Stop!');
    break;
  case 'yellow':
    console.log('Caution');
    break;
  case 'blue':
  case 'green':
    console.log('Go!');
    break;
  default:
    console.log('Wrong Signal');
    break;
}