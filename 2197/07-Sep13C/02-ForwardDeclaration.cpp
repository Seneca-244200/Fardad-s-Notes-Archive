struct ParkingSpot;
struct Car {
   char m_licensePlate[9];
   char m_makeModel[128];
   ParkingSpot* ps;
};
struct ParkingSpot {
   Car m_C;
   int m_spotNo;
};
struct ParkingLot {
   ParkingSpot m_ps[50];
   int m_noOfOccupied;
};