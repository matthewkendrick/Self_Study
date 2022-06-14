'use strict';

{
  const images = [
    'img/pic00.png',
    'img/pic01.png',
    'img/pic02.png',
    'img/pic03.png',
    'img/pic04.png',
    'img/pic05.png',
    'img/pic06.png',
    'img/pic07.png',
  ];
  let currentIndex = 0;

  const mainImage = document.getElementById('main');
  mainImage.src = images[currentIndex];

  images.forEach(image => {
    const img = document.createElement('img');
    img.src = image;
    
    const li = document.createElement('li');
    li.appendChild(img);
    document.querySelector('.thumbnails').appendChild(li);
  });
}