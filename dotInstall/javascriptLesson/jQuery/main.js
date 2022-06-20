'use strict';

$(() => {
  $('button').click(() => {
    $('li:nth-child(odd), li:last-child')
      .addClass('red-text');
  });
});