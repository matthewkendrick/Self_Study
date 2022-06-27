<!DOCTYPE html>
<html lang="ja">
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link rel="stylesheet" href="../css/stylesheet.css">
  <link href="https://fonts.googleapis.com/icon?family=Material+Icons" rel="stylesheet">
  <link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Material+Symbols+Rounded:opsz,wght,FILL,GRAD@20..48,100..700,0..1,-50..200" />
  <title>Document</title>
</head>
<body>
  <section>
    <div class="text">
      <p>
        <?php

          class Post
          {
            private $text;
            private static $count = 0;
            public const VERSION = 0.1;

            public function __construct(string $text)
            {
              $this->text = $text;
              self::$count++;
            }

            public function show()
            {
              printf('%s' . '<br>', $this->text);
            }

            public static function showInfo()
            {
              printf('Count: %d' . '<br>', self::$count);
              printf('VERSION: %.1f' . '<br>', self::VERSION);
            }
          }
          
          $posts = [];
          $posts[0] = new Post('hello');
          $posts[1] = new Post('hello again');

          $posts[0]->show() . '<br>';
          $posts[1]->show() . '<br>';

          Post::showInfo() . '<br>';

           echo Post::VERSION . '<br>';
        ?>
      </p>
    </div>
  </section>
  
</body>
</html>