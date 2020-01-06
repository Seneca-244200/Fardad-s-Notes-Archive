#ifndef SDDS_CAR_H__
#define SDDS_CAR_H__
namespace sdds {
   //struct Car {   same as class
   //private:
   class Car{
      char m_make[31];
      char m_model[41];
      char m_license_plate[9];
   public:
      void set(const char* the_make, const char* the_model,
               const char* the_license_plate);

   };
}
#endif // !SDDS_CAR_H__
