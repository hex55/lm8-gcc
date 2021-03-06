
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_SignatureAlgorithm__
#define __gnu_javax_net_ssl_provider_SignatureAlgorithm__

#pragma interface

#include <java/lang/Enum.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
              class SignatureAlgorithm;
          }
        }
      }
    }
  }
}

class gnu::javax::net::ssl::provider::SignatureAlgorithm : public ::java::lang::Enum
{

  SignatureAlgorithm(::java::lang::String *, jint);
public:
  ::java::lang::String * algorithm();
  static JArray< ::gnu::javax::net::ssl::provider::SignatureAlgorithm * > * values();
  static ::gnu::javax::net::ssl::provider::SignatureAlgorithm * valueOf(::java::lang::String *);
public: // actually package-private
  static JArray< jint > * $SWITCH_TABLE$gnu$javax$net$ssl$provider$SignatureAlgorithm();
public:
  static ::gnu::javax::net::ssl::provider::SignatureAlgorithm * ANONYMOUS;
  static ::gnu::javax::net::ssl::provider::SignatureAlgorithm * RSA;
  static ::gnu::javax::net::ssl::provider::SignatureAlgorithm * DSA;
private:
  static JArray< jint > * $SWITCH_TABLE$gnu$javax$net$ssl$provider$SignatureAlgorithm__;
  static JArray< ::gnu::javax::net::ssl::provider::SignatureAlgorithm * > * ENUM$VALUES;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_provider_SignatureAlgorithm__
