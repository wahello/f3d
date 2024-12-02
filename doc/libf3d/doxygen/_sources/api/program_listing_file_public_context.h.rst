
.. _program_listing_file_public_context.h:

Program Listing for File context.h
==================================

|exhale_lsh| :ref:`Return to documentation for file <file_public_context.h>` (``public/context.h``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   #ifndef f3d_context_h
   #define f3d_context_h
   
   #include "exception.h"
   #include "export.h"
   
   #include <functional>
   #include <string>
   
   namespace f3d
   {
   class F3D_EXPORT context
   {
   public:
     using fptr = void (*)();
     using function = std::function<fptr(const char*)>;
   
     static function glx();
   
     static function wgl();
   
     static function cocoa();
   
     static function egl();
   
     static function osmesa();
   
     static function getSymbol(const std::string& lib, const std::string& func);
   
     struct loading_exception : public exception
     {
       explicit loading_exception(const std::string& what = "");
     };
   
     struct symbol_exception : public exception
     {
       explicit symbol_exception(const std::string& what = "");
     };
   };
   }
   
   #endif
