
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_qt_QtAudioClip__
#define __gnu_java_awt_peer_qt_QtAudioClip__

#pragma interface

#include <gnu/java/awt/peer/qt/NativeWrapper.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace qt
          {
              class QtAudioClip;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Toolkit;
    }
    namespace net
    {
        class URL;
    }
  }
}

class gnu::java::awt::peer::qt::QtAudioClip : public ::gnu::java::awt::peer::qt::NativeWrapper
{

public:
  QtAudioClip(::java::lang::String *);
  QtAudioClip(::java::net::URL *);
private:
  void loadClip(::java::lang::String *);
  void play(jboolean);
  jboolean isAvailable();
  void checkForQt();
public:
  virtual void loop();
  virtual void play();
  virtual void stop();
  virtual void dispose();
  virtual void finalize();
private:
  static ::java::awt::Toolkit * t;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_qt_QtAudioClip__
