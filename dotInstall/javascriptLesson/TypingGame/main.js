'use strict';

{
  function setWord() {
    word = words[Math.floor(Math.random() * words.length)];
    target.textContent = word;
    loc = 0;
  }

  const words = [
    'red',
    'blue',
    'pink',
  ];
  let word = 'red';
  let loc = 0;

  const target = document.getElementById('target');

  setWord();

  document.addEventListener('keydown', e => {
    if (e.key != word[loc]) {
      return;
    }

    loc++;

    target.textContent = '_'.repeat(loc) + word.substring(loc);

    if (loc == word.length) {
      setWord();
    }
  });
}