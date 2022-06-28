<?php
  
  namespace Dotinstall\MyPHPApp;

  class Post
  {
    private $text;

    function __construct($text)
    {
      $this->text = $text;
    }

    function show()
    {
      printf('%s' . '<br>', $this->text);
    }
  }
?>