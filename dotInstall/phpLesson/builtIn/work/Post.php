<?php
  
  namespace Dotinstall\MyPHPApp;

  class Post
  {
    private $text;

    public function __construct($text)
    {
      if (strlen($text) <= 3) {
        throw new Exception('Text too short!');
      }
      $this->text = $text;
    }

    public function show()
    {
      printf('%s' . '<br>', $this->text);
    }
  }
?>