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
           abstract class BasePost
           {
              protected $text;

              public function __construct($text)
              {
                $this->text = $text;
              }

              abstract public function show();
           }
           

          class Post extends BasePost
          {
            public function show()
            {
              printf('%s' . '<br>', $this->text);
            }
          }

          class SponsoredPost extends BasePost
          {
            private $sponsor;

            public function  __construct($text, $sponsor)
            {
              parent::__construct($text);
              $this->sponsor = $sponsor;
            }

            public function show()
            {
              printf('%s by %s' . '<br>', $this->text, $this->sponsor);
            }
          }
          
          
          $posts = [];
          $posts[0] = new Post('hello');
          $posts[1] = new Post('hello again');
          $posts[2] = new SponsoredPost('hello hello!', 'dotinstall');

          function processPost(BasePost $post)
          {
            $post->show();
          }

          foreach ($posts as $post) {
            processPost($post);
          }

        ?>
      </p>
    </div>
  </section>
  
</body>
</html>