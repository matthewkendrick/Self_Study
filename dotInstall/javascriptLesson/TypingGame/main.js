'use strict';

{
  function setWord() {
    word = words.splice(Math.floor(Math.random() * words.length), 1)[0];
    target.textContent = word;
    loc = 0;
  }

  const words = [
    'red',
    'blue',
    'yellow',
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
      if (words.length == 0) {
        const result = document.getElementById('result');
        result.textContent = 'Finished!!!';
        return;
      }
      setWord();
    }
  });
}