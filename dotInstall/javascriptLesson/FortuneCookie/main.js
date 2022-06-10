'use strict';

{
  const btn = document.getElementById('btn');

  btn.addEventListener('click', () => {
    const results = ['大吉', '中吉', '凶', '末吉'];

    btn.textContent = results[Math.floor(Math.random() * results.length)];
  });
}