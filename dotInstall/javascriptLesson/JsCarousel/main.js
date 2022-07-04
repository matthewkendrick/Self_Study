'use strict';

{
  const next = document.getElementById('next');
  const ul = document.querySelector('ul');

  next.addEventListener('click', () => {
    ul.style.transform = 'translateX(-200px)';
  })
}