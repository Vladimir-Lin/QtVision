/****************************************************************************
 *
 * Copyright (C) 2001~2016 Neutrino International Inc.
 *
 * Author   : Brian Lin ( Foxman , Vladimir Lin , Vladimir Forest )
 * E-mail   : lin.foxman@gmail.com
 *          : lin.vladimir@gmail.com
 *          : wolfram_lin@yahoo.com
 *          : wolfram_lin@sina.com
 *          : wolfram_lin@163.com
 * Skype    : wolfram_lin
 * WeChat   : 153-0271-7160
 * WhatsApp : 153-0271-7160
 * QQ       : lin.vladimir@gmail.com
 * URL      : http://qtvision.sourceforge.net/
 *
 * QtVision acts as an interface between Qt and visible devices library.
 * Please keep QtVision as simple as possible.
 *
 * Copyright 2001 ~ 2016
 *
 ****************************************************************************/

#ifndef QT_VISION_H
#define QT_VISION_H

#include <QtCore>
#ifndef QT_STATIC
#include <QtScript>
#endif

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#  if defined(QT_BUILD_QTVISION_LIB)
#    define Q_VISION_EXPORT Q_DECL_EXPORT
#  else
#    define Q_VISION_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define Q_VISION_EXPORT
#endif

#define QT_VISION_LIB 1

#define BEGIN_VISION_NAMESPACE namespace Vision {
#define END_VISION_NAMESPACE   }

BEGIN_VISION_NAMESPACE

class DeviceProfile
{
  public:

    explicit DeviceProfile (void) ;
    virtual ~DeviceProfile (void) ;

  protected:

  private:

} ;

END_VISION_NAMESPACE

QT_END_NAMESPACE

#endif
