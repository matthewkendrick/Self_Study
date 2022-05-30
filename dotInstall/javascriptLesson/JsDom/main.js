'use strict'

{
  document.querySelector('button').addEventListener('click', () => {
    document.getElementById('target').textContent = 'Changed!';
  });
}