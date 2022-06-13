'use strict';

{
  const word = 'red';
  let loc = 0;

  const target = document.getElementById('target');
  target.textContent = word;

  document.addEventListener('keydown', e => {
    if (e.key == word[loc]) {
      loc++;

      target.textContent = '_'.repeat(loc) + word.substring(loc);
    }
  });
}