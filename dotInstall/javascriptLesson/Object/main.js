'use strict'


{
  class Post {
    constructor(text) {
      this.text = text;
      this.likeCount = 0;
    }

    show() {
      console.log(`${this.text} - ${this.likeCount}likes`);
    }
    like() {
      this.likeCount++;
      this.show();
    }

    // 静的メソッド
    static showInfo() {
      console.log('Post class version 1.0');
    }
  }

  const posts = [
    new Post('JavaScriptの勉強中...'),
    new Post('プログラミング楽しい！'),
  ];

  posts[0].like();
  Post.showInfo();
}