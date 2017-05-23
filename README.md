# ZumoLineTracer for BridgePOint

## Introduction

これはBridgePointを使って 
* GR-PEACH
* Zumo
* TOPPERS/ASP
のためのモデルを記述したプロジェクトです．

## 前提や準備

プロジェクトを動作させるためにはarm-none-eabi-gcc/g++が必要です．
OS Xでの開発環境の準備方法を DEVENVOSX.md に記述しています．

## プロジェクトのインポート

git cloneしたプロジェクトをインポートします．インポートする際に，3つのプロジェクトが表示されますが，ZumoLineTracer プロジェクトのみをインポートします．

## モデルの閲覧

ZumoLineTracer/LineTracer 以下に
* functions: 主にCコード側から呼ばれる関数群
    * setup: システム起動時に呼び出される関数
* models: LineTracerの本体．
    * LineTracerクラス: このクラスのステートマシンがライントレースを行います．このマシンに送信されるイベントはfunctions以下で定義されている関数内で生成しています．それらはC言語でハンドコードしたコードから呼び出されます．
があります．

## ソースの閲覧

* build: ハンドコードしたコードなど．ここでmakeする．OS Xではmake installでターゲットにインストール可能である．

## ビルド

* Project -> Build でビルドできる

## ドライバとして提供されている機能
* 汎用
    * タイマ
* Zumo関連
    * ボタンが押されたらpushed関数を呼び出す
    * IR/centerが線を検知したらonline関数を呼び出す
    * IR/centerが線から外れたことを検知したらoffline関数を呼び出す
    * 障害物に当たって減速したらbumper関数を呼び出す

## 制限事項，今後の課題