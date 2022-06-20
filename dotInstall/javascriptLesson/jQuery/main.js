'use strict';

$(() => {
  $('button').click(() => {
    $('<li>')
      .text('New Item')
      .appendTo('ul');
  });
});