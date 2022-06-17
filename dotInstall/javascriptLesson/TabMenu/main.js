'use strict';

{
  const menuItems = document.querySelectorAll('.menu li a');

  menuItems.forEach(clickedItem => {
    clickedItem.addEventListener('click', e => {
      e.preventDefault();
      
      menuItems.forEach(item => {
        item.classList.remove('active');
      });
      clickedItem.classList.add('active');
    });
  });
}