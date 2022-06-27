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
           
           interface LikeInterface
           {
             public function like();
           }

           abstract class BasePost
           {
              protected $text;

              public function __construct($text)
              {
                $this->text = $text;
              }

              abstract public function show();
           }

          class Post extends BasePost implements LikeInterface
          {
            private $likes = 0;

            public function like()
            {
              $this->likes++;
            }

            public function show()
            {
              printf('%s' . '<br>', $this->text, $this->likes);
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

          class PremiumPost extends BasePost implements LikeInterface
          {
            private $price;
            private $likes = 0;

            public function like()
            {
              $this->likes++;
            }

            public function  __construct($text, $price)
            {
              parent::__construct($text);
              $this->price = $price;
            }

            public function show()
            {
              printf('%s (%d) [%d JPY]' . '<br>', $this->text, $this->likes, $this->price);
            }
          }
          
          $posts = [];
          $posts[0] = new Post('hello');
          $posts[1] = new Post('hello again');
          $posts[2] = new SponsoredPost('hello hello!', 'dotinstall');
          $posts[3] = new PremiumPost('Hello there', 300);

          $posts[0]->like();
          $posts[3]->like();

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