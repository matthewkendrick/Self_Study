'use strict';

{
  const menuItems = document.querySelectorAll('.menu li a');

  menuItems.forEach(item => {
    item.addEventListener('click', e => {
      e.preventDefault();
      
      item.classList.add('active');
    });
  });
}