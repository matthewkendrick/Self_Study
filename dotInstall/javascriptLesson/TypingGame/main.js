'use strict';

{
  document.addEventListener('keydown', e => {
    const target = document.getElementById('target');
    target.textContent = e.key;
  });
}