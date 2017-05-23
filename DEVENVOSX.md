# OS X上での開発環境の準備手順

## homebrewで arm-none-eabi-gcc をインストール
brew install caskroom/cask/brew-cask
brew cask install gcc-arm-embedded

## コンフィギュレータのコンパイル or ダウンロード

### コンパイル
brew install boost
cd asp-1.9.2-utf8/cfg
make

### ダウンロード
Boostのインストールに時間がかかるのがムカつく，どうしてもコンパイルがうまくいかない等の人は，以下からOS X用のバイナリをダウンロードして
https://www.toppers.jp/cfg-download.html

asp-1.9.2-utf8/cfg/cfg の中にダウンロードしたcfgをコピー．
もしかしたら実行権限を設定する必要があるかも (chmod +x cfg)
