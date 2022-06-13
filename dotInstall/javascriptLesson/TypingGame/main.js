'use strict';

{
  const words = [
    'red',
    'blue',
    'pink',
  ];
  let word = 'red';
  let loc = 0;

  const target = document.getElementById('target');
  word = words[Math.floor(Math.random() * words.length)];
  target.textContent = word;

  document.addEventListener('keydown', e => {
    if (e.key != word[loc]) {
      return;
    }

    loc++;

    target.textContent = '_'.repeat(loc) + word.substring(loc);
  });
}