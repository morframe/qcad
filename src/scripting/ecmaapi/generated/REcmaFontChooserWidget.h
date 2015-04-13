// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMAFONTCHOOSERWIDGET_H
        #define RECMAFONTCHOOSERWIDGET_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RFontChooserWidget.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaFontChooserWidget {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getQWidget(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        getFont
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setFont
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSize
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setSize
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        fontChanged
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        sizeChanged
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RFontChooserWidget* getSelf(const QString& fName, QScriptContext* context)
    ;static RFontChooserWidget* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  void fromScriptValue(const QScriptValue& value,
        RFontChooserWidget*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RFontChooserWidget*>(o);
        }
    static  QScriptValue toScriptValue(QScriptEngine *engine,
        RFontChooserWidget*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    };
    #endif
    