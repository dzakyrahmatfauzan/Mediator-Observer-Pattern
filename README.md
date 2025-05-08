# Mediator-Observer-Pattern

Kelompok : 

- Ilham Fameidana (5223600063)
- Dzaky Rahmat Fauzan ( 5223600082)

## Pertanyaan Refleksi

Setelah membuat dua implementasi, jawab pertanyaan berikut:

1. Apa perbedaan struktur antara Observer dan Mediator di kasus ini?
2. Dalam skala **game kecil**, mana yang lebih praktis? Kenapa?
3. Dalam skala **game besar** (dengan banyak event), mana yang lebih scalable? Kenapa?
4. Sebutkan satu risiko yang harus diwaspadai saat memakai masing-masing pattern.

Jawaban :

1. **Observer :** Player tahu langsung siapa pendengarnya, menyimpan list observer.
    
    **Mediator :** Player tidak tahu siapa pendengar, hanya kirim event ke mediator.
    
2. Dalam skala kecil yang lebih praktis adalah **Observer**, karena struktur lebih sederhana dan langsung.
3. Dalam skala besar yang lebih scalabe adalah **Mediator**, karena memisahkan event sender dan receiver, lebih mudah mengatur banyak event dan listener.
4. **Observer :** Coupling tinggi antara event source dan listener, susah diskalakan.
    
    **Mediator :** Bisa jadi terlalu kompleks jika terlalu banyak jenis event; debugging bisa sulit karena indirect call.
