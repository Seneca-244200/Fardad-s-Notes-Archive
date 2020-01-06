struct ParkingSlot;
struct Car {
   char m_licensePlate[9];
   char m_makeModel[128];
   ParkingSlot* m_parkedIn;
};

struct ParkingSlot {
   Car m_C;
   int m_spotNo;
};


struct ParkingLot {
   ParkingSlot m_ps[50];
   int m_noOfOccupied;
};

